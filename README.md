![](https://github.com/arazmj/gerdu/workflows/Go/badge.svg)
[![Go Report Card](https://goreportcard.com/badge/github.com/arazmj/gerdu)](https://goreportcard.com/report/github.com/arazmj/gerdu)
[![codecov](https://codecov.io/gh/arazmj/gerdu/branch/master/graph/badge.svg)](https://codecov.io/gh/arazmj/gerdu)

# Gerdu

Gerdu is a thread-safe key-value in-memory database server written in GoLang.
Currently, it supports two eviction policy LFU (Least Frequently Used) and LRU (Least Recently Used). 
It also supports for weak reference type of cache where the cache consumes as much memory as the garbage collector allows it to use.
<br/>

You can enable gRPC and HTTP and enjoy taking advantage of both protocols simultaneously. 
```
Usage of gerdu:
  -capacity string
        The size of cache, once cache reached this capacity old values will evicted.
        Specify a numerical value followed by one of the following units (not case sensitive)
        K or KB: Kilobytes
        M or MB: Megabytes
        G or GB: Gigabytes
        T or TB: Terabytes (default "64MB")
  -grpcport int
        the grpc server port number (default 8081)
  -httpPort int
        the http server port number (default 8080)
  -protocols string
        protocol grpc or http, multiple values can be selected seperated by comma (default "http")
  -type string
        type of cache, lru or lfu, weak (default "lru")
  -verbose
        verbose logging
```

Example of usage:
To insert or update a key 
```
curl --request PUT --data '1' http://localhost:8080/cache/1
curl --request PUT --data '2' http://localhost:8080/cache/2
curl --request PUT --data '3' http://localhost:8080/cache/3
curl --request PUT --data 'some new value' http://localhost:8080/cache/3
```

To retrieve the key
```
curl --request GET localhost:8080/cache/3
```

Prometheus metrics
```
curl --request GET localhost:8080/metrics
```

Sample application s available in:

C++, Dart, Erlang, Groovy, Java, NodeJS, PHP, Python, Ruby, Scala ,C# ,Elixir ,GoLang ,Haskell ,Kotlin ,Objective-C ,Perl ,R ,Rust ,Swift