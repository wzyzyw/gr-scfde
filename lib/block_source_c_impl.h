/* -*- c++ -*- */
/* 
 * Copyright 2015 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_SCFDE_BLOCK_SOURCE_C_IMPL_H
#define INCLUDED_SCFDE_BLOCK_SOURCE_C_IMPL_H

#include <scfde/block_source_c.h>

namespace gr {
  namespace scfde {

    class block_source_c_impl : public block_source_c
    {
    private:
	int d_block_size;
	gr_complex* d_constellation_point;
	gr_complex* d_block_data;
	
	int d_block_num;
	int d_block_count;
	
	void gen_data();
	
     public:
      block_source_c_impl(int block_size,int blk_num);
      ~block_source_c_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace scfde
} // namespace gr

#endif /* INCLUDED_SCFDE_BLOCK_SOURCE_C_IMPL_H */

