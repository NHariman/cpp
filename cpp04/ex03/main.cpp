/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 19:02:05 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/25 21:19:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"
#include "cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	std::cout << "Start of Main()" << std::endl;
	std::cout << "===========> Create IMateriaSource* src = new MateriaSource()" << std::endl;
	IMateriaSource*	src = new MateriaSource();
	std::cout << "===========> src->learnMateria(new Ice())" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "===========> src->learnMateria(new Cure())" << std::endl;
	src->learnMateria(new Cure());

	std::cout << "===========> ICharacter *me = new Character(\"me\")" << std::endl;
	ICharacter*	me = new Character("me");
	std::cout << "===========> AMateria *tmp" << std::endl;
	AMateria*	tmp;
	std::cout << "===========> tmp = src->createMateria(\"ice\");" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << "===========> me->equip(tmp, ice);" << std::endl;
	me->equip(tmp);
	std::cout << "===========> tmp = src->createMateria(\"cure\");" << std::endl;
	tmp = src->createMateria("cure");
	std::cout << "===========> me->equip(tmp, cure);" << std::endl;
	me->equip(tmp);

	std::cout << "===========> ICharacter*	bob = new Character(\"bob\");" << std::endl;
	ICharacter*	bob = new Character("bob");

	std::cout << "===========> me->use(0, *bob);" << std::endl;
	me->use(0, *bob);
	std::cout << "===========> me->use(1, *bob);" << std::endl;
	me->use(1, *bob);

	std::cout << "===========> Character	aram = Character(\"Aram\");" << std::endl;
	Character	aram = Character("Aram");
	std::cout << "===========> aram->equip(tmp);" << std::endl;
	aram.equip(tmp);
	std::cout << "===========> Character	aramclone = Character(aram);" << std::endl;
	Character	aramClone = Character(aram);

	std::cout << "===========> deletes" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}