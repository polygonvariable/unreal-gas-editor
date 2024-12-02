# GAS Editor 🪂
GAS Editor allows to quicky create attribute set and attributes directly from Unreal Engine `5.4` editor.
Check out video on how to use it:

# Index
- Installation
- How to Use ?
  - Editor Window
  - Create Attribute Set
  - Read Attribute Set
    - Create/Remove Attributes
  - Save Attribute Set
  - Hot Reload
  - Advanced
- Known Issues

# Installation
1. Ensure that C++ support is enabled for your project.
2. Download the source code and place it in the `/Plugins/GASPlugin` folder.
3. Enable the `GASPlugin` from the `Plugins` window.

# How to use ?
#### Editor Window:
1. In the `Content Browser`, enable `Show Plugin Content` if it is disabled.
2. Navigate to `Plugins/GASPlugin/Editor`.
3. Right-click on `GASAttributeEditor` and select `Run Editor Utility Widget`.

#### Create Attribute Set:
If you don't have an existing attribute set, you can create one by following these steps:
1. Enter the base class name and the folder where the `.h` file will be created.
2. Click the `New` button to create a new attribute set.
3. If the file is successfully created, an empty attribute set will be loaded, allowing you to add attributes to it.

*Note:* If the file already exists, it will be overwritten !

#### Read Attribute Set:
1. Enter the class name and the folder path in the fields.
2. Click the `Read` button to load the code.
3. If the file is found, the attributes will be loaded; otherwise, an error message will be displayed.

#### Create/Remove Attributes:
- After loading the code, the attribute sets will be displayed.
- To add custom attributes, click the Add button.
- To remove attributes, click the `x` button next to the attribute name.
- By default, the `Auto Create Max` checkbox is enabled. This will automatically generate a `Max` attribute for the base attribute. You can disable this feature by unchecking the `Auto Create Max` checkbox.

#### Save Attribute Set:
- Once changes are made, click the `Save` button to save the generated code.

#### Hot Reload:
- After saving the attribute set, press `Ctrl + Alt + F11` to trigger `Live Coding` and hot reload the project.

#### Advanced:
- **`Attribute Template:`**
The template used to generate new attributes. It supports the following placeholders:
  - `_CLASS_` - Represents the name of the base class.
  - `_NAME_` - Represents the name of the attribute.
- **`Code Region:`**
The Code Region section contains two text boxes (`start` and `end`), which specify the region where the generated code will be inserted in the `.h` header file.
  - `start` - By default, this is set to `public:` and `// @GAS_EDITOR_START`
  - `end` - By default, this is set to `};` and `// @GAS_EDITOR_END`

# Known Issues:
- **Attribute disappearance after editor restart:** If you restart the editor, attributes might disappear. To avoid this, delete the `/Binaries` folder before reopening the editor.