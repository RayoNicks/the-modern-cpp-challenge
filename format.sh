find -wholename "./ch*[\.h|\.cpp]" | xargs -I {} clang-format --style=file --verbose -i {}
