#ifndef MITAMA_MANA_DATA_VALUE_LIST_HPP
#define MITAMA_MANA_DATA_VALUE_LIST_HPP
#include <mitama/mana/data/constant_variable.hpp>
#include <mitama/mana/data/tag/data_tag.hpp>

namespace mitama::mana {
    template <auto...>
    struct value_list: private data_type {};

    template <auto... Xs>
    inline constexpr value_list<Xs...> value_list_c{};

    template <auto... Xs>
    inline constexpr auto value_list_of(value<Xs>...) { return value_list_c<Xs...>; };
}

#endif
