/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 23:57:37 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/02 13:10:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

static int			input_check(char **av)
{
	if (av[1][0] == '\0')
	{
		std::cout << "Please provide a file.\n";
		return (1);
	}
	if (av[2][0] == '\0')
	{
		std::cout << "Please provide a chunk to replace. Within " << av[1] << std::endl;
		return (1);
	}
	if (av[3][0] == '\0')
	{
		std::cout << "Please provide content to replace " << av[2] << " with.\n";
		return (1);
	}
	return (0);
}

static int			fill_buf(char *av, std::string *cont)
{
	std::fstream	newfile;
	std::string		tp;
	
	newfile.open(av, std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open())
	{   //checking whether the file is open
		while (getline(newfile, tp))
    	{
			cont->append(tp); //print the data of the string
			cont->append("\n");
		}
		newfile.close(); //close the file object.
	}
	else
	{
		std::cout << "File does not exist." << std::endl;
		return (1);
	}
	return (0);
}

int					main(int ac, char **av)
{
	std::string buf;
	Replace text;
	int		ret;
	
	if (ac != 4)
	{
		if (ac > 4)
			std::cout << "Too many arguments!\n";
		std::cout << "Please provide a file, a chunk to replace, and content to replace it with.\n";
		return (1);
	}
	if (input_check(av)) // checks if the input is valid, that all fields are filled and not empty.
		return (1);
	if (fill_buf(av[1], &buf)) // read the file and store it in buf
		return (1);
	text.setText(buf); // set buf in the Replace class, pointed to by text.
	ret = text.setStr(av[2], av[3]); // convert the char * s1 and s2 into std::strings and save them in the Replace class
	if (ret) // ret checks if the two strings aren't identical, if the replaceable strings are identical, do nothing
		text.swapText(); // perform the replace action
	if (text.makeFile(av[1])) //save result in new file with .replace tag.
		return (1);
	return (0);
}