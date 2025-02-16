/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:13:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/16 11:23:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	Warlock(const std::string &, const std::string &);
	~Warlock();
	const std::string &getName(void) const;
	const std::string &getTitle(void) const;
	void setTitle(const std::string &);
	void introduce() const;
};
