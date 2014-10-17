/* Galaxy.h
Copyright (c) 2014 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef GALAXY_H_
#define GALAXY_H_

#include "Point.h"

class DataNode;
class Sprite;



class Galaxy {
public:
	void Load(const DataNode &node);
	
	const Point &Position() const;
	const Sprite *GetSprite() const;
	
	
private:
	Point position;
	const Sprite *sprite = nullptr;
};

#endif