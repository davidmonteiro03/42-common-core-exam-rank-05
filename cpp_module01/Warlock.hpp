/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:18:02 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:25:56 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell *> _spells;

public:
	Warlock(const std::string &, const std::string &);
	~Warlock();
	const std::string &getName(void) const;
	const std::string &getTitle(void) const;
	void setTitle(const std::string &);
	void introduce() const;
	void learnSpell(ASpell *);
	void forgetSpell(std::string);
	void launchSpell(std::string, const ATarget &);
};
