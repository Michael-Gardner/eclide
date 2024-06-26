#define BOOST_LIB_DIAGNOSTIC
#pragma warning(push)
#pragma warning(disable:4003)
#pragma warning(disable:4100)
#pragma warning(disable:4244)
#pragma warning(disable:4510)
#pragma warning(disable:4610)
#pragma warning(disable:4701)
#pragma warning(disable:4996)	//  This function or variable may be unsafe. Consider using wcsncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_DEPRECATE.
#include <boost/version.hpp>
#include <boost/algorithm/string.hpp>
//#include <boost/algorithm/string/regex.hpp>
#ifdef max
#undef max
#endif
#if BOOST_VERSION > 105000
#define BOOST_FILESYSTEM_VERSION 3
#else
#define BOOST_FILESYSTEM_VERSION 2
#endif
#include <boost/filesystem.hpp>
#include <boost/format.hpp> 
#include <boost/bind/bind.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_comparison.hpp>
#include <boost/tuple/tuple_io.hpp>
#include <boost/signal.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/tokenizer.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/local_time_adjustor.hpp>
#include <boost/date_time/c_local_time_adjustor.hpp>
#include <boost/concept_check.hpp>
#include <boost/concept_archetype.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/crc.hpp>
#include <boost/thread.hpp>
#include <boost/variant.hpp>
#include <boost/foreach.hpp>
#include <boost/program_options.hpp>
#include <boost/serialization/map.hpp> 
#include <boost/serialization/vector.hpp> 
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_wiarchive.hpp>
#include <boost/archive/xml_woarchive.hpp>
#include <boost/ptr_container/ptr_deque.hpp>
namespace boost
{
#ifdef _UNICODE
    typedef tokenizer<boost::char_separator<WCHAR>, std::wstring::const_iterator, std::wstring> wtokenizer;
    #define _tformat wformat
    #define _ttokenizer wtokenizer
    //#define _tregex wregex
    #define _tcommand_line_parser wcommand_line_parser
    namespace filesystem
    {
        #define _tpath wpath;
    }
#else
    typedef tokenizer<boost::char_separator<char>, std::string::const_iterator, std::string> ntokenizer;
    #define _tformat format
    #define _ttokenizer ntokenizer
    //#define _tregex regex
    #define _tcommand_line_parser command_line_parser
    namespace archive
    {
        #define xml__toarchive xml_oarchive
        #define xml__tiarchive xml_iarchive
    }
    namespace filesystem
    {
        #define _tpath path;
    }
#endif
}
#pragma warning(pop)
