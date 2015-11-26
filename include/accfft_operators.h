/*
 *  Copyright (c) 2014-2015, Amir Gholami, George Biros
 *  All rights reserved.
 *  This file is part of AccFFT library.
 *
 *  AccFFT is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  AccFFT is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with AccFFT.  If not, see <http://www.gnu.org/licenses/>.
 *
*/

#ifndef ACCFFT_OPERATORS_H
#define ACCFFT_OPERATORS_H
#include <mpi.h>
#include <fftw3.h>
#include <omp.h>
#include <iostream>
#include <cmath>
#include <math.h>

void accfft_grad(double * A_x, double *A_y, double *A_z,double *A,accfft_plan *plan, std::bitset<3> XYZ, double* timer);
void accfft_laplace(double * LA,double *A,accfft_plan *plan, double* timer);
void accfft_divergence(double* divA, double * A_x, double *A_y, double *A_z,accfft_plan *plan, double* timer);
#endif