/*
 * Sujet 5 - C++11, ou pourquoi c'est très important de suivre les évolutions du langage.
 */

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>
#include <memory>

namespace company
{
	class Employee
	{
		public:

			// Question 1 : Que se passerait-il si on remplaçait std::list par
			// std::vector en laissant le reste du code inchangé ? Pourquoi ?
			typedef std::list<Employee> EmployeeList;

			Employee(const std::string& _name, const std::string& _function) :
				m_name(_name),
				m_function(_function)
			{
			}

			// Question 2 : C'est quoi cette syntaxe de ouf et à quoi ça sert ?
			Employee(Employee&& other) :
				m_name(std::move(other.m_name)),
				m_function(std::move(other.m_function))
			{
			}

			Employee& operator=(Employee&& other)
			{
				m_name = std::move(other.m_name);
				m_function = std::move(other.m_function);

				return *this;
			}

			const std::string& name() const { return m_name; }
			const std::string& function() const { return m_function; }
			std::string title() const { return name() + " (" + function() + ")"; }

			std::ostream& write(std::ostream& os, int level = 0) const
			{
				os << title() << std::endl;

				// Question 3 : Comment aurait-du t-on écrire la boucle suivante en C++03 ?
				for (auto&& emp : m_employees)
				{
					for (int i = 0; i <= level; ++i)
					{
						os << "\t";
					}

					emp.write(os, level + 1);
				}

				return os;
			}

			Employee& add(Employee&& emp)
			{
				// Question 4 : Expliquer pourquoi std::move() est nécessaire ici.
				m_employees.push_back(std::move(emp));

				return m_employees.back();
			}

			Employee& add(const std::string& name, const std::string& function)
			{
				// Question 5 : Comment aurait-pu t-on écrire la ligne suivante autrement ?
				return add( { name, function } );
			}

		private:

			// Question 6 : À quoi servent les deux lignes suivantes ? Sont-elles vraiment nécessaires ?
			Employee(const Employee&) = delete;
			Employee& operator=(const Employee&) = delete;

			std::string m_name;
			std::string m_function;
			EmployeeList m_employees;
	};

	// Question 7 : Pourquoi cette fonction doit-elle être déclarée ce namespace ?
	std::ostream& operator<<(std::ostream& os, const Employee& emp)
	{
		return emp.write(os);
	}
}

int main()
{
	using company::Employee;

	Employee jack("Jack Bronson", "Director");

	Employee& simon = jack.add("Simon Gruber", "Technical Director");
	Employee& alisha = jack.add("Alisha Daniels", "Marketing Director");

	Employee& jenny = simon.add("Jenny Deng", "Team leader");

	jenny.add("Peter Sergey", "Developer");
	jenny.add("Luke Cobenfeld", "Developer");
	jenny.add("Jason Bartow", "Senior Developer");

	alisha.add("Gary Poleman", "Salesmen");
	alisha.add("Andrew Garfield", "Salesmen");

	std::cout << jack << std::endl;

  return EXIT_SUCCESS;
}
