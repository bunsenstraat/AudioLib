/*
 * AudioLib
 *
 * Copyright (c) 2017 - Terence M. Darwen - tmdarwen.com
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <vector>

//! @file Windowing.h
//! @brief Functions for applying various windowing to audio signals.

namespace Signal {

//! Apply a Blackman window.
void BlackmanWindow(std::vector<double>& inputSignal, double startPercent=0.0, double endPercent=100.0);

//! Apply an inverse Blackman window.
void InverseBlackmanWindow(std::vector<double>& inputSignal, double startPercent=0.0, double endPercent=100.0);

//! Apply an reverse Blackman window.
void ReverseBlackmanWindow(std::vector<double>& inputSignal, double startPercent=0.0, double endPercent=100.0);

//! Apply linear window.
void LinearFadeInOut(std::vector<double>& inputSignal);

}
