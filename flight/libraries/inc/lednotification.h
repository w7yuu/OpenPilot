/**
 ******************************************************************************
 *
 * @file       lednotification.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2014.
 * @brief      led notification library
 *             --
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef LEDNOTIFICATION_H_
#define LEDNOTIFICATION_H_

#include <optypes.h>
#include <stdbool.h>

struct ExtLedsBridge;

void LedNotificationExtLedsInit(uint32_t ext_leds_id);

void LedNotificationExtLedsRun();


#endif /* LEDNOTIFICATION_H_ */
