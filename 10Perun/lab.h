#pragma once
double f(double x);
double Simpson(double a, double b, double(*f)(double), double eps);
double GAMean(double a, double b);
double ellipticalSimpson();