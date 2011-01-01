/**
 * Copyright (c) 2009-2010 Martin M Reed
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HBC_BASE64_H
#define HBC_BASE64_H

namespace hbcn_base64 {

  int encoded_length(int decoded_length);
  int decoded_length(int encoded_length);
  
  void encode(const unsigned char* decoded, unsigned char* encoded, int decoded_length);
  void decode(const unsigned char* encoded, unsigned char* decoded, int encoded_length);
}

#endif
