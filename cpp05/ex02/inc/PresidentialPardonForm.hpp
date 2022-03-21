/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:42:02 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 21:07:54 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string		_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		virtual ~PresidentialPardonForm();
		std::string				getTarget() const;
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		void	execute(Bureaucrat const & executor) const;
};

#endif