/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:19:23 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:26:42 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::~ATarget() {}

const std::string &ATarget::getType(void) const { return _type; }

void ATarget::getHitBySpell(const ASpell &spell) const { std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl; }
