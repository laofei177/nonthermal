/*
  Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 John C. Houck 

  This file is part of the nonthermal module

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#ifndef PHOTONS_H
#define PHOTONS_H

#include "_nonthermal.h"

extern double incident_photon_max_energy (void);
extern double incident_photon_min_energy (void);
extern int incident_photon_spectrum (double e, double *num);
extern void set_incident_photon_kelvin_temperature (double t);

#endif

