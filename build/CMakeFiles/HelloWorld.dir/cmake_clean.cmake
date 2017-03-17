FILE(REMOVE_RECURSE
  "CMakeFiles/HelloWorld.dir/HelloWorld/HelloWorld.c.o"
  "HelloWorld.pdb"
  "HelloWorld"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/HelloWorld.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
