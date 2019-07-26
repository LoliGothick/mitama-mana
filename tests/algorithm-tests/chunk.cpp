#include <catch2/catch.hpp>
#include <mitama/mana/data/type_list.hpp>
#include <mitama/mana/algorithm/chunk.hpp>
#include <mitama/mana/functional/metafunc.hpp>
#include <type_traits>
#include <iostream>
#include <boost/type_index.hpp>
namespace mana = mitama::mana;

TEST_CASE("chunk<2>", "[algorithm][chunk]") {
    REQUIRE(std::is_same_v<
        decltype(mana::chunk<2>(mana::type_list_c<int, int, double, double>)),
        mana::type_list<mana::type_list<int, int>, mana::type_list<double, double>>>);
}
