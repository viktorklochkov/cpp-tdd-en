add_library(project_adventure_sk_lib
        project_adventure_sk.cpp
        project_adventure_sk.h
        Game.cpp
        Game.h
        Map.cpp
        Map.h
        Player.cpp
        Player.h
        Direction.h
        Direction.cpp
        Room.h
        Room.cpp
        Inventory.h
)

    target_include_directories(project_adventure_sk_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
