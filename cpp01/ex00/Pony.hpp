/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 21:25:29 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 14:32:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdexcept>

class Pony
{
	private:
		std::string _name;
		std::string _mane, _eyes, _coat;
		std::string _breed;
		int _height, _weight;
	public:
		Pony(std::string name, std::string mane, std::string eye, std::string coat, std::string breed, int height, int weight);
		~Pony();
		std::string get_name();
		std::string get_mane();
		std::string get_eyes();
		std::string get_coat();
		std::string get_breed();
		int get_weight();
		int get_height();
};

void PonyOnTheHeap();
void PonyOnTheStack();


