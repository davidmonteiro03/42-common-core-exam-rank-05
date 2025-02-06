/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:18:02 by dcaetano          #+#    #+#             */
/*   Updated: 2024/02/02 22:18:07 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell*> _spells;
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		const std::string& getName(void) const;
		const std::string& getTitle(void) const;
		void setTitle(const std::string& title);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, const ATarget& target);
};

#endif
