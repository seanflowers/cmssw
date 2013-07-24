#ifndef _SIPIXELCONTINUOUSPALETTE_
#define _SIPIXELCONTINUOUSPALETTE_

/** \class SiPixelContinuousPalette 
 * *
 *  Class that handles the SiPixel color codes
 * 
 *  $Date: 2012/06/26 19:42:18 $
 *  $Revision: 1.3 $
 *  \author Dario Menasce
 *
 *  This namespace defines a color space to produce 
 *  a smooth color palette. The index of the r,g and b 
 *  vectors is a normalized integer [0-99].
  */

namespace SiPixelContinuousPalette 
{
  constexpr int r[] = {255 ,134 ,122 ,110 , 98 , 86 , 74 , 63 , 51 , 39 ,
             	     27 , 15 ,  3 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
             	      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
             	      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
		      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
             	      0 ,  0 ,  0 ,  0 ,  0 , 10 , 22 , 34 , 46 , 57 ,
             	     69 , 81 , 93 ,105 ,117 ,129 ,141 ,153 ,165 ,176 ,
             	    188 ,200 ,212 ,224 ,236 ,248 ,250 ,255 ,255 ,255 ,
             	    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
             	    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 } ;
	
  constexpr int g[] = {  255 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
             	      0 ,  0 ,  0 ,  0 , 20 , 32 , 44 , 56 , 68 , 80 ,
             	     91 ,103 ,115 ,127 ,139 ,151 ,163 ,175 ,187 ,199 ,
		    210 ,222 ,234 ,246 ,255 ,255 ,255 ,255 ,255 ,255 ,
             	    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
             	    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
		    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
		    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,238 ,226 ,
		    214 ,202 ,190 ,178 ,166 ,154 ,142 ,131 ,119 ,107 , 
		     95 , 83 , 71 , 59 , 47 , 35 , 23 , 12 ,  0 ,  0 } ;
  constexpr int b[] = {255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
             	    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
		    255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,255 ,
		    255 ,255 ,255 ,255 ,253 ,251 ,239 ,227 ,216 ,204 ,
		    192 ,180 ,168 ,156 ,144 ,132 ,120 ,108 , 97 , 85 ,
		     73 , 61 , 49 , 37 , 25 , 13 ,  6 ,  0 ,  0 ,  0 ,
		      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
		      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
		      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,
		      0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 } ; 
}

#endif
