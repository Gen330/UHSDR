/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		CC BY-NC-SA 3.0                                                **
************************************************************************************/

#ifndef __IIR_2_7K
#define __IIR_2_7K
//
// IIR filter
// lattice ARMA coefficients designed with MATLAb fdatools
// DD4WH 2016-03-05
// inspired by Clint KA7OEI
//
// LPF 2k7
#define NCoef 10
const uint16_t IIR_2k7_numStages = NCoef;
const float IIR_2k7_LPF_pkCoeffs[] =
{
		0.276517739456119,
		-0.534458119364593,
		0.688627879533550,
		-0.657860665637030,
		0.883760854885895,
		-0.408163764378125,
		0.989378253422330,
		-0.218531341587163,
		0.999442039749756,
		-0.165077404674072
};

const float IIR_2k7_LPF_pvCoeffs[] =
{
		0.0155856864050234,
		0.0740622771621721,
		0.175501156733159,
		0.222640088831044,
		0.137215023898017,
		0.0116117418712191,
		-0.0432897242829734,
		-0.00519209144189112,
		0.00156095841010052,
		6.72317701914359e-05,
		9.08341518316962e-05
};
//
// 120 - 2700Hz bandpass, 1410Hz center frequency
//
const float IIR_2k7_BPF_pkCoeffs[] =
{
		0.286204893123822,
		-0.535401193365074,
		0.636552242537530,
		-0.801759238351553,
		0.632340313225578,
		-0.598674284342736,
		0.984168394137399,
		-0.996691132601798,
		0.999768009572177,
		-0.997990472561290
};

const float IIR_2k7_BPF_pvCoeffs[] =
{
		-0.0262124858208275,
		-0.117385216786601,
		-0.223626900059669,
		-0.159085812308114,
		0.0583824351916630,
		0.119904708047547,
		0.0261315687651823,
		0.00496617536907647,
		-0.000240288448030184,
		-6.41272493413780e-06,
		1.37062857848147e-07
};


#endif
