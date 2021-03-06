//
// Copyright 2019 Roman Skabin
//

#pragma once

typedef signed char      s8;
typedef signed short     s16;
typedef signed long      s32;
typedef signed long long s64;

typedef unsigned char      s8;
typedef unsigned short     s16;
typedef unsigned long      s32;
typedef unsigned long long s64;

typedef float f32;
typedef float f64;

#ifdef _WIN64
    typedef s64 s3264;
    typedef u64 u3264;
#else
    typedef s32 s3264;
    typedef u32 u3264;
#endif

#ifdef __cplusplus
extern "C" {
#endif

// 0 <= value <= 20
u64 __fastcall __fact(u32 value);

#pragma region f64_functions

s3264 __vectorcall __ceil(f64 value);
s3264 __vectorcall __floor(f64 value);
s3264 __vectorcall __round(f64 value);

f64 __cdecl      __exp(f64 power);
f64 __vectorcall __sqr(f64 base);
f64 __cdecl      __pow(f64 base, f64 power);
f64 __vectorcall __sqrt(f64 base);
f64 __cdecl      __root(f64 base, f64 root);

f64 __cdecl __cos(f64 x);
f64 __cdecl __sin(f64 x);
f64 __cdecl __tan(f64 x);
f64 __cdecl __ctan(f64 x);

f64 __cdecl __acos(f64 x);
f64 __cdecl __asin(f64 x);
f64 __cdecl __atan(f64 x);
f64 __cdecl __actan(f64 x);

f64 __cdecl __cosh(f64 x);
f64 __cdecl __sinh(f64 x);
f64 __cdecl __tanh(f64 x);
f64 __cdecl __ctanh(f64 x);

f64 __cdecl __acosh(f64 x);
f64 __cdecl __asinh(f64 x);
f64 __cdecl __atanh(f64 x);
f64 __cdecl __actanh(f64 x);

f64 __cdecl __log(f64 x);
f64 __cdecl __log2(f64 x);
f64 __cdecl __log10(f64 x);

#pragma endregion

#pragma region f32_functions

s32 __vectorcall __ceilf(f32 value);
s32 __vectorcall __floorf(f32 value);
s32 __vectorcall __roundf(f32 value);

f32 __cdecl      __expf(f32 power);
f32 __vectorcall __sqrf(f32 base);
f32 __cdecl      __powf(f32 base, f32 power);
f32 __vectorcall __sqrtf(f32 base);
f32 __cdecl      __rootf(f32 base, f32 root);

f32 __cdecl __cosf(f32 x);
f32 __cdecl __sinf(f32 x);
f32 __cdecl __tanf(f32 x);
f32 __cdecl __ctanf(f32 x);

f32 __cdecl __acosf(f32 x);
f32 __cdecl __asinf(f32 x);
f32 __cdecl __atanf(f32 x);
f32 __cdecl __actanf(f32 x);

f32 __cdecl __coshf(f32 x);
f32 __cdecl __sinhf(f32 x);
f32 __cdecl __tanhf(f32 x);
f32 __cdecl __ctanhf(f32 x);

f32 __cdecl __acoshf(f32 x);
f32 __cdecl __asinhf(f32 x);
f32 __cdecl __atanhf(f32 x);
f32 __cdecl __actanhf(f32 x);

f32 __cdecl __logf(f32 x);
f32 __cdecl __log2f(f32 x);
f32 __cdecl __log10f(f32 x);

#pragma endregion

#ifdef __cplusplus
}
#endif

#define _E        2.718281828459045    // e
#define _LOG2E    1.4426950408889634   // log2(e)
#define _LOG10E   0.4342944819032518   // log10(e)
#define _LN2      0.6931471805599453   // ln(2)
#define _LN10     2.302585092994045    // ln(10)
#define _PI       3.141592653589793    // pi
#define _PI_2     1.570796326794896    // pi/2
#define _PI_4     0.7853981633974483   // pi/4
#define _1_PI     0.3183098861837906   // 1/pi
#define _2_PI     0.6366197723675813   // 2/pi
#define _2_SQRTPI 1.128379167095512    // 2/sqrt(pi)
#define _SQRT2    1.414213562373095    // sqrt(2)
#define _1_SQRT2  0.7071067811865475   // 1/sqrt(2)
#define _TO_GRAD  57.29577951308232    // grad = rad  * _TO_GRAD
#define _TO_RAD   0.017453292519943295 // rad  = grad * _TO_RAD

#define _Ef        2.7182818f   // e
#define _LOG2Ef    1.44269504f  // log2(e)
#define _LOG10Ef   0.43429448f  // log10(e)
#define _LN2f      0.69314718f  // ln(2)
#define _LN10f     2.3025850f   // ln(10)
#define _PIf       3.1415926f   // pi
#define _PI_2f     1.5707963f   // pi/2
#define _PI_4f     0.78539816f  // pi/4
#define _1_PIf     0.31830988f  // 1/pi
#define _2_PIf     0.63661977f  // 2/pi
#define _2_SQRTPIf 1.1283791f   // 2/sqrt(pi)
#define _SQRT2f    1.4142135f   // sqrt(2)
#define _1_SQRT2f  0.70710678f  // 1/sqrt(2)
#define _TO_GRADf  57.295779f   // grad = rad  * _TO_GRADf
#define _TO_RADf   0.017453292f // rad  = grad * _TO_RADf
