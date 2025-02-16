/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:09 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:31:09 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

class Warlock
{
private:
	std::string _name;
	std::string _title;
	SpellBook _book;

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
