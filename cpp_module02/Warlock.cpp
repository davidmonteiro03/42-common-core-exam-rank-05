/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:22 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:30:46 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) { std::cout << _name << ": This looks like another boring day." << std::endl; }

Warlock::~Warlock() { std::cout << _name << ": My job here is done!" << std::endl; }

const std::string &Warlock::getName(void) const { return (_name); }

const std::string &Warlock::getTitle(void) const { return (_title); }

void Warlock::setTitle(const std::string &title) { _title = title; }

void Warlock::introduce() const { std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; }

void Warlock::learnSpell(ASpell *spell) { _book.learnSpell(spell); }

void Warlock::forgetSpell(std::string spell_name) { _book.forgetSpell(spell_name); }

void Warlock::launchSpell(std::string spell_name, const ATarget &target)
{
	if (_book.createSpell(spell_name))
		_book.createSpell(spell_name)->launch(target);
}
