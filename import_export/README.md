# Import/Export

Here we test the import/export functionality that cmake provides by building a library, Foo, which is used by executable Bar.

## Steps to build

```bash
mkdir foo/build
mkdir bar/build
cd foo/build
cmake ..
cpack -G ZIP
unzip foo-package.zip
cd ../../bar/build
cmake ..
cmake --build
```
For convenience we're using a symlink from bar/deps/foo-package -> ../../foo/build/foo-package, adjust stuff as needed.

