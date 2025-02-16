/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:35:20 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:30:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
	std::map<std::string, ATarget *> _targets;

public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget *);
	void forgetTargetType(const std::string &);
	ATarget *createTarget(const std::string &);
};
