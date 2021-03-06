/*
 *  This file is part of GAM-NGS.
 *  Copyright (c) 2011 by Riccardo Vicedomini <rvicedomini@appliedgenomics.org>,
 *  Francesco Vezzi <vezzi@appliedgenomics.org>,
 *  Simone Scalabrin <scalabrin@appliedgenomics.org>,
 *  Lars Arverstad <lars.arvestad@scilifelab.se>,
 *  Alberto Policriti <policriti@appliedgenomics.org>,
 *  Alberto Casagrande <casagrande@appliedgenomics.org>
 *
 *  GAM-NGS is an evolution of a previous work (GAM) done by Alberto Casagrande,
 *  Cristian Del Fabbro, Simone Scalabrin, and Alberto Policriti.
 *  In particular, GAM-NGS has been adapted to work on NGS data sets and it has
 *  been written using GAM's software as starting point. Thus, it shares part of
 *  GAM's source code.
 *
 *  GAM-NGS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GAM-NGS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GAM-NGS.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "pctg/CtgInPctgInfo.hpp"


CtgInPctgInfo::CtgInPctgInfo(): _reversed(false) {}

CtgInPctgInfo::CtgInPctgInfo(const int32_t ctgId, const int64_t start, const int64_t end, const bool reversed, const bool isMaster ) :
	_ctgId(ctgId), _start(start), _end(end), _reversed(reversed), _isMaster(isMaster)
{}

CtgInPctgInfo::CtgInPctgInfo(const CtgInPctgInfo &orig) :
	_ctgId(orig._ctgId), _start(orig._start), _end(orig._end), _reversed(orig._reversed), _isMaster(orig._isMaster)
{}


int32_t CtgInPctgInfo::getId() const
{
    return this->_ctgId;
}


int64_t CtgInPctgInfo::getStart() const
{
	return this->_start;
}


int64_t CtgInPctgInfo::getEnd() const
{
	return this->_end;
}


bool CtgInPctgInfo::isReversed() const
{
    return this->_reversed;
}

bool CtgInPctgInfo::isMaster() const
{
	return this->_isMaster;
}