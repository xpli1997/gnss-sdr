/*!
 * \file gnss_signal_processing.h
 * \brief This library gathers a few functions used by the algorithms of gnss-sdr,
 *  regardless of system used
 *
 * \author Luis Esteve, 2012. luis(at)epsilon-formacion.com
 *
 * Detailed description of the file here if needed.
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * GNSS-SDR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNSS-SDR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNSS-SDR. If not, see <https://www.gnu.org/licenses/>.
 *
 * -------------------------------------------------------------------------
 */

#ifndef GNSS_SDR_GNSS_SIGNAL_PROCESSING_H_
#define GNSS_SDR_GNSS_SIGNAL_PROCESSING_H_

#include <gsl/gsl>
#include <complex>
#include <cstdint>

/*!
 * \brief This function generates a complex exponential in _dest.
 *
 */
void complex_exp_gen(gsl::span<std::complex<float>> _dest, double _f, double _fs);

/*!
 * \brief This function generates a conjugate complex exponential in _dest.
 *
 */
void complex_exp_gen_conj(gsl::span<std::complex<float>> _dest, double _f, double _fs);

/*!
 * \brief This function makes a conversion from hex (the input is a char)
 *  to binary (the output are 4 ints with +1 or -1 values).
 *
 */
void hex_to_binary_converter(gsl::span<int32_t> _dest, char _from);

/*!
 * \brief This function resamples a sequence of float values.
 *
 */
void resampler(const gsl::span<float> _from, gsl::span<float> _dest,
    float _fs_in, float _fs_out);

/*!
 * \brief This function resamples a sequence of complex values.
 *
 */
void resampler(gsl::span<const std::complex<float>> _from, gsl::span<std::complex<float>> _dest,
    float _fs_in, float _fs_out);

#endif /* GNSS_SDR_GNSS_SIGNAL_PROCESSING_H_ */
