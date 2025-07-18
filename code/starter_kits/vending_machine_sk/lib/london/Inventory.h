//
// Created by Viktor on 03.07.25.
//

#pragma once

#include <string>
#include <unordered_map>

#include "item.h"
#include "order.h"

namespace london_vending
{
    class Inventory
    {
        std::unordered_map<std::string, Item> _items;

    public:
        void add_item(const Item& item);

        [[nodiscard]] int get_item_count(const std::string& name) const;

        [[nodiscard]] Item get_item(const std::string& name) const;

        void restock_item(const std::string& name, int amount);

        void executeOrder(const Order& order);

        void sell_item(const std::string& name, int amount = 1);

        [[nodiscard]] auto begin() const
        {
            return _items.begin();
        }
        [[nodiscard]] auto end() const
        {
            return _items.end();
        }
    };


} // namespace london_vending
