/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:15:35 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:24:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
	std::string _type;

public:
	ATarget(std::string);
	~ATarget();
	const std::string &getType(void) const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(const ASpell &) const;
};
