

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE 

        "main.cpp"
)

target_compile_options(${PROJECT_NAME} PRIVATE

        -Werror
        -Wall
        -Wextra
        
)