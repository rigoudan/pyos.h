# pyos.h
a header only library that port python os module to c++, with similar style.



## Progress

| Python               | C++                                 | Version | Status         |
| -------------------- | ----------------------------------- | ------- | -------------- |
| os.listdir(path='.') | vector os::listdir(string path=".") | 0.2     | 0.2版本修复中文乱码的问题 |
|                      |                                     |         |                |
|                      |                                     |         |                |



## LIST

### os.listdir

#### specification

```plain
os.listdir(path='.')

Return a list containing the names of the entries in the directory given by path. The list is in arbitrary order, and does not include the special entries '.' and '..' even if they are present in the directory.

path may be a path-like object. If path is of type bytes (directly or indirectly through the PathLike interface), the filenames returned will also be of type bytes; in all other circumstances, they will be of type str.

This function can also support specifying a file descriptor; the file descriptor must refer to a directory.

Note To encode str filenames to bytes, use fsencode().
See also The scandir() function returns directory entries along with file attribute information, giving better performance for many common use cases.
Changed in version 3.2: The path parameter became optional.

New in version 3.3: Added support for specifying an open file descriptor for path.

Changed in version 3.6: Accepts a path-like object.
```

#### dependency

改用tinydir.h作为依赖库。

存在中文乱码问题，所以放弃：windows上的dirent.h. [https://github.com/tronkko/dirent](https://github.com/tronkko/dirent).

