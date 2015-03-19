#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/equal.hpp>
#include <boost/vmd/get_type.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
 #define BOOST_VMD_REGISTER_ANID (ANID)
 #define SEQUENCE_EMPTY
 #define SEQUENCE_MULTI (1,2,3) 88
 #define SEQUENCE1 (3,(1,2,3))
 #define SEQUENCE2 ANID
 #define SEQUENCE3 (1,(2,(3,BOOST_PP_NIL)))
 #define SEQUENCE4 1
 #define SEQUENCE5 (1)(2)(3)
 #define SEQUENCE6 (1,2,3)
 #define SEQUENCE7 BOOST_VMD_TYPE_NUMBER
 
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE_EMPTY),BOOST_VMD_TYPE_EMPTY));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE_MULTI),BOOST_VMD_TYPE_SEQUENCE));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE1),BOOST_VMD_TYPE_ARRAY));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE2),BOOST_VMD_TYPE_IDENTIFIER));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE3),BOOST_VMD_TYPE_LIST));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE4),BOOST_VMD_TYPE_NUMBER));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE5),BOOST_VMD_TYPE_SEQ));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE6),BOOST_VMD_TYPE_TUPLE));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_GET_TYPE(SEQUENCE7),BOOST_VMD_TYPE_TYPE));
 
#endif

  return boost::report_errors();
  
  }
