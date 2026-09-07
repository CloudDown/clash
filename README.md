# clash

Small C++ board prototype on an 8×5 grid (8 rows, 5 columns).

## Build

```
make
./clash
```

## Test

```
make test
```

Coordinates are `(x, y)` with `x` as column `0..4` and `y` as row `0..7`. Out-of-range placements return `false`.

Personal prototype. No license declared.
