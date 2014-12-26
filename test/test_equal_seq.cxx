#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/generic/equal.hpp>
#include <boost/vmd/generic/not_equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  #define BOOST_VMD_DETECT_ggh_ggh
  #define BOOST_VMD_REGISTER_dvd (dvd)
  #define BOOST_VMD_DETECT_dvd_dvd
  
  #define ASEQ (25)(26)(27)
  #define ASEQ2 (1)(2)(3)
  #define ASEQ3 (25)(26)(27)
  #define ASEQ4 (25)((1)(2)(3)(4)(5))(27)
  #define ASEQ5 (25)((1)(2)(4)(4)(5))(27)
  #define ASEQ6 (25)((1)(2)(3)(4)(5))(27)
  #define ASEQ7 (25)((1)(2)((11,12,13))(ggh)(5))(27)
  #define ASEQ8 (25)((1)(2)((11,12,14))(dvd)(5))(27)
  #define ASEQ9 (25)((1)(2)((11,12,13))(ggh)(5))(27)
  
  BOOST_TEST(BOOST_VMD_EQUAL(ASEQ,ASEQ3));
  BOOST_TEST(BOOST_VMD_EQUAL(ASEQ4,ASEQ6));
  BOOST_TEST(BOOST_VMD_EQUAL(ASEQ7,ASEQ9));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ASEQ,ASEQ2));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ASEQ4,ASEQ5));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ASEQ7,ASEQ8));
  
#endif

  return boost::report_errors();
  
  }
