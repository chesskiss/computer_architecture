from datetime import datetime
from typing import IO, Any

from django.core.files.base import File
from django.utils.functional import LazyObject

class Storage:
    def open(self, name: str, mode: str = ...) -> File: ...
    def save(
        self, name: str | None, content: IO[Any], max_length: int | None = ...
    ) -> str: ...
    def get_valid_name(self, name: str) -> str: ...
    def get_available_name(self, name: str, max_length: int | None = ...) -> str: ...
    def generate_filename(self, filename: str) -> str: ...
    def path(self, name: str) -> str: ...
    def delete(self, name: str) -> None: ...
    def exists(self, name: str) -> bool: ...
    def listdir(self, path: str) -> tuple[list[str], list[str]]: ...
    def size(self, name: str) -> int: ...
    def url(self, name: str | None) -> str: ...
    def get_accessed_time(self, name: str) -> datetime: ...
    def get_created_time(self, name: str) -> datetime: ...
    def get_modified_time(self, name: str) -> datetime: ...

class FileSystemStorage(Storage):
    OS_OPEN_FLAGS: int = ...
    def __init__(
        self,
        location: str | None = ...,
        base_url: str | None = ...,
        file_permissions_mode: int | None = ...,
        directory_permissions_mode: int | None = ...,
    ) -> None: ...
    @property
    def base_location(self) -> str: ...
    @property
    def location(self) -> str: ...
    @property
    def base_url(self) -> str: ...
    @property
    def file_permissions_mode(self) -> int | None: ...
    @property
    def directory_permissions_mode(self) -> int | None: ...

class DefaultStorage(LazyObject): ...

default_storage: Any

def get_storage_class(import_path: str | None = ...) -> type[Storage]: ...
