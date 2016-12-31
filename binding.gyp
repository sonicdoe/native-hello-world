{
  "targets": [{
    "target_name": "hello_world",
    "sources": [ "addon.cpp" ],
    "include_dirs": [
      "<!(node -e \"require('nan')\")"
    ]
  }]
}
