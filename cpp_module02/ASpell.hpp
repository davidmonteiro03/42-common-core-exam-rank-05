/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:18:55 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:26:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string _name;
	std::string _effects;

public:
	ASpell(std::string, std::string);
	virtual ~ASpell();
	std::string getName(void) const;
	std::string getEffects(void) const;
	virtual ASpell *clone() const = 0;
	void launch(const ATarget &) const;
};
