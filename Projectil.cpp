/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectil.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguyet <jguyet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 01:16:57 by jguyet            #+#    #+#             */
/*   Updated: 2017/04/09 01:16:58 by jguyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Projectil.hpp"

Projectil::Projectil(int type, int x, int y, int color) : AEntity(type, x, y, "|", 1, color) {
	return ;
}

Projectil::~Projectil() {
	return ;
}

Projectil::Projectil(Projectil const& rhs) : AEntity(rhs) {
	
	*this = rhs;
	return;
}

Projectil		&Projectil::operator=(Projectil const & rhs) {
	this->x = rhs.x;
	this->y = rhs.y;
	return *this;
}
