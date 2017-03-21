/*
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ServerMotd_h__
#define ServerMotd_h__

#include <string>

class WorldPacket;

namespace Motd
{
    /// Set a new Message of the Day
    void TC_GAME_API SetMotd(std::string motd);

    /// Get the current Message of the Day
    char const* TC_GAME_API GetMotd();

    /// Get the motd packet to send at login
    WorldPacket const* TC_GAME_API GetMotdPacket();
}

#endif //ServerMotd_h__
