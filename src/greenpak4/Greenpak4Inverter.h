/***********************************************************************************************************************
 * Copyright (C) 2016 Andrew Zonenberg and contributors                                                                *
 *                                                                                                                     *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General   *
 * Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) *
 * any later version.                                                                                                  *
 *                                                                                                                     *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied  *
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for     *
 * more details.                                                                                                       *
 *                                                                                                                     *
 * You should have received a copy of the GNU Lesser General Public License along with this program; if not, you may   *
 * find one here:                                                                                                      *
 * https://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt                                                              *
 * or you may search the http://www.gnu.org website for the version 2.1 license, or you may write to the Free Software *
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA                                      *
 **********************************************************************************************************************/

#ifndef Greenpak4Inverter_h
#define Greenpak4Inverter_h

#include "Greenpak4BitstreamEntity.h"

class Greenpak4Inverter : public Greenpak4BitstreamEntity
{
public:

	//Construction / destruction
	Greenpak4Inverter(
		Greenpak4Device* device,
		unsigned int matrix,
		unsigned int ibase,
		unsigned int oword);
		
	//Bitfile metadata
	virtual unsigned int GetConfigLen();
	
	//Serialization
	virtual bool Load(bool* bitstream);
	virtual bool Save(bool* bitstream);
		
	virtual ~Greenpak4Inverter();
	
	void SetInput(Greenpak4BitstreamEntity* input);
	
	virtual std::string GetDescription();
	
	virtual std::vector<std::string> GetInputPorts();
	virtual std::vector<std::string> GetOutputPorts();
	
protected:
	Greenpak4BitstreamEntity* m_input;
};

#endif	//Greenpak4Inverter_h
