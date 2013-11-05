/* Copyright (C) 2007-2010 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Victor Julien <victor@inliniac.net>
 */

#ifndef __OUTPUT_HTTPLOG_H__
#define __OUTPUT_HTTPLOG_H__
TmEcode OutputHttpLog (ThreadVars *tv, Packet *p, void *data, PacketQueue *pq, PacketQueue *postpq);

void TmModuleHttpJsonRegister (void);
void TmModuleHttpJsonIPv4Register (void);
void TmModuleHttpJsonIPv6Register (void);
OutputCtx *HttpJsonInitCtx(ConfNode *);

#endif /* __OUTPUT_HTTPLOG_H__ */