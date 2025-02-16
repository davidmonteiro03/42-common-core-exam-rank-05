/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:35:41 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:29:40 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
	std::map<std::string, ASpell *> _spells;

public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell *);
	void forgetSpell(const std::string &);
	ASpell *createSpell(const std::string &);
};
