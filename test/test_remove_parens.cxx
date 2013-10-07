#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/vmd_remove_parens.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define DATA (5 + 3) * 4
  #define DATA2 4 * (5 + 3)
  #define DATA3 4 * (5 + 3) * (2 + 1)
  #define DATA4 (5 + 3) * (2 + 1) * 4
  
  BOOST_TEST_EQ(BOOST_VMD_REMOVE_PARENS(DATA),17);
  BOOST_TEST_EQ(BOOST_VMD_REMOVE_PARENS(DATA2),32);
  BOOST_TEST_EQ(BOOST_VMD_REMOVE_PARENS(DATA3),96);
  BOOST_TEST_EQ(BOOST_VMD_REMOVE_PARENS(DATA4),41);
  
#endif

  return boost::report_errors();
  
  }