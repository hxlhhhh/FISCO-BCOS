/*
    @CopyRight:
    This file is part of FISCO-BCOS.

    FISCO-BCOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FISCO-BCOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FISCO-BCOS.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * @state base interface for StateFactory
 *
 * @file StateFactoryInterface.h
 * @author mingzhenliu
 * @date 2018-10-24
 */

#pragma once

#include "StateFace.h"
#include <libethcore/Common.h>
namespace dev
{
namespace eth
{
class StateFactoryInterface
{
public:
    StateFactoryInterface() = default;
    virtual ~StateFactoryInterface(){};
    virtual std::shared_ptr<StateFace> getState() = 0;
};

}  // namespace eth
}  // namespace dev
