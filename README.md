# SARIF-Examples

Utilize clangs built-in sarif formatter (clang version >= 17): 
```
clang -fdiagnostics-format=sarif -Wunsafe-buffer-usage src/main.c  > sarif.json 2>&1
```

## Clang-Tidy

Download: 
```
curl -sSL https://github.com/psastras/sarif-rs/releases/download/clang-tidy-sarif-latest/clang-tidy-sarif-x86_64-unknown-linux-gnu -o clang-tidy-sarif
```

Usage: 
```
clang-tidy -checks=cert-* -warnings-as-errors=* src/main.c -- | clang-tidy-sarif > clang-tidy-sarif.json
```
