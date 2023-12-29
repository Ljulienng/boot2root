# Boot2Root - Bonus - Writeup 4

We can extract some informations from the iso file `BornToSecHackMe-v1.1.iso`

To see the content of the iso file, we will build a python script, with the `pycdlib` library.

We built a script to easily do a ls like on the iso

```
$ python3 iso_reader.py '/' <iso_path>
.
..
CASPER
INSTALL
ISOLINUX
MD5SUM.TXT;1
PRESEED
README.DISKDEFINES;1
UBUNTU.;1
_DISK

$ python3 iso_reader.py '/CASPER' <iso_path>
.
..
FILESYSTEM.MANIFEST;1
FILESYSTEM.MANIFEST_DESKTOP;1
FILESYSTEM.SIZE;1
FILESYSTEM.SQUASHFS;1
INITRD.GZ;1
README.DISKDEFINES;1
VMLINUZ.;1
```

With our tool, we saw the location of the filesystem : `/casper/filesystem.squashfs`. 

We also built a tool (`extract.py`) to extract the filesystem from the iso and get a specific file inside the filesystem. We can do it with the python library `PySquashfsImage`.
`pip install PySquashfsImage:0.7.1``
With this tool, we will extract the `.bash_history` of root, to see wich commands was typed as root.

```
$ python3 extract.py '/root/.bash_history' <iso_path>         
Extract filesystem.squashfs from the iso ...
Downloading /root/.bash_history ...
```

With some research of the file, we found the password of zaz

```
....
adduser zaz
646da671ca01bb5d84dbb5fb2238dc8e
....
```

Script it to get the password easily (`read_bash_history.py`)

Now, we can get a ssh connection on the user zaz and follow the steps of the `writeup2`, part **Zaz**

Or simply use the `exploit.py` in the `zaz` folder

Root shell!



